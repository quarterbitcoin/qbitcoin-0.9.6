from distutils.core import setup
setup(name='qtbcspendfrom',
      version='1.0',
      description='Command-line utility for qbitcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@qbitcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
