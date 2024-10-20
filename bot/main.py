import discord
from discord.ext import commands
import os
from dotenv import load_dotenv, find_dotenv

load_dotenv()

TOKEN = os.getenv('BOT_TOKEN')
CHANNEL = 1297199591669891217
intents = discord.Intents().all()

bot = commands.Bot(command_prefix='!', intents=intents)

@bot.event
async def on_ready():
    channel = bot.get_channel(CHANNEL)
    await channel.send("Бот активаен!")
    print(f'Logged in as {bot.user}')

@bot.command()
async def echo(ctx, *, message):
    await ctx.send(message)

@bot.command()
async def hello(ctx):
    await ctx.send("hello")
    
bot.run(TOKEN)