all:
	make -C src install
	# gem build gemspec # uncomment to use geocoder as package not with relative imports

test: all
	ruby -Ilib tests/run.rb

install: all
	# gem install *.gem

clean:
	make -C src clean
	rm -f lib/geocoder/us/sqlite3.so
	rm -f *.gem
