#!/usr/bin/ruby

result = []

ARGV.each do |arg|
  if arg =~ /^-?\d+$/
    result << arg.to_i
  end
end

result.sort.each do |num|
  puts num
end
