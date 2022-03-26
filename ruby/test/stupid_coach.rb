def coach_answer(your_message)
  your_message.capitalize!
  your_message.upcase! if your_message == your_message.upcase

  if your_message.include? "?"
    return "#{coach_answer_enhanced(your_message)}Silly question, get dressed and go to work!"
  elsif your_message == "I am going to work right now!"
    return ""
  elsif your_message.empty?
    return "Say something!"
  else
    return "#{coach_answer_enhanced(your_message)}I don't care, get dressed and go to work!"
  end
end

def coach_answer_enhanced(your_message)
  your_message == your_message.upcase ? "I can feel your motivation! " : ""

  coach_answer(your_message)
end


loop do
  puts "Coach storms in and yells, \"WAKE UP!\""
  print "What do you say? "
  your_message = gets.chomp

  puts coach_answer(your_message)

  your_message.capitalize!

  break if your_message == "I am going to work right now!"
end