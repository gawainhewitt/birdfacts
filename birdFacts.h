const int NUMBER_OF_ELEMENTS = 254;
const int MAX_SIZE = 140;

char birdFacts [NUMBER_OF_ELEMENTS] [MAX_SIZE] = {
{"There are over 11,000 known species of birds in the world"}, 
{"The Ostrich is the largest bird and cannot fly, but it is an excellent runner"}, 
{"Hummingbirds are the only birds that can fly backwards"}, 
{"Penguins are birds but are unable to fly but they are exceptional swimmers"}, 
{"The Arctic Tern has the longest migratory journey, covering about 18,641 miles (30,000 km) annually"}, 
{"The smallest bird in the world is the Bee Hummingbird, weighing around 1.6 to 2 grams"}, 
{"Falcons are among the fastest birds, reaching speeds of up to 240 mph (386 km/h) in a dive"}, 
{"The Lyrebird is known for its incredible ability to mimic natural and artificial sounds"}, 
{"The Kakapo, a nocturnal parrot from New Zealand, is the heaviest parrot and is critically endangered"}, 
{"Crows are highly intelligent birds and can solve complex problems"}, 
{"Birds are descendants of dinosaurs"}, 
{"The kiwi bird is native to New Zealand and is the only bird with nostrils at the tip of its beak"}, 
{"Albatrosses have the longest wingspan of any living bird, reaching up to 9 ft 10in feet (3 metres)"}, 
{"The African Grey Parrot is known for its exceptional ability to mimic human speech"}, 
{"Some birds, like the Common Swift, can spend almost their entire lives in the air"}, 
{"The Hoatzin chick has claws on its wings, a feature retained from its dinosaur ancestors"}, 
{"The Mute Swan is not entirely mute; it can make grunting and hissing sounds"}, 
{"The Harpy Eagle is one of the largest and most powerful eagles in the world"}, 
{"The Australian Lyrebird is an expert mimic and can imitate chainsaws and camera shutters"}, 
{"The Greater Roadrunner is known for catching and eating rattlesnakes"}, 
{"The Shoebill has a massive shoe-shaped bill and is native to tropical swamps in central tropical Africa"}, 
{"The Kakapo is the only flightless parrot and is critically endangered"}, 
{"The Atlantic Puffin can hold multiple fish in its beak at once"}, 
{"The Andean Condor has one of the longest lifespans of any bird, reaching up to 70 years"}, 
{"Owls have specialised feathers that enable silent flight"}, 
{"The Helmeted Hornbill has solid casques on its bill, making it one of the heaviest birds in the world"}, 
{"The Superb Lyrebird has one of the most complex and beautiful song repertoires"}, 
{"The Kakapo, or night parrot, is primarily nocturnal and is herbivorous"}, 
{"The Kaka, a parrot from New Zealand, is known for its playful behaviour"}, 
{"The Eurasian Wren has one of the loudest songs relative to its size"}, 
{"The Northern Mockingbird can mimic the songs of other birds and even mechanical sounds"}, 
{"The Secretary Bird is known for its ability to stomp on prey with its powerful legs"}, 
{"The California Condor has the largest wingspan of any North American bird"}, 
{"The Oilbird is the only nocturnal flying fruit-eating bird"}, 
{"The Atlantic Puffin's beak changes color during the breeding season"}, 
{"The Laysan Albatross is one of the longest-lived birds, with individuals reaching over 60 years"}, 
{"The Bald Eagle is the national bird and symbol of the United States"}, 
{"The Victoria Crowned Pigeon is one of the largest pigeon species"}, 
{"The Common Raven is highly intelligent and can solve complex problems"}, 
{"The Blue-footed Booby gets its name from its distinctive blue feet"}, 
{"The Dodo, native to Mauritius, is an extinct flightless bird"}, 
{"The Emperor Penguin is the tallest and heaviest penguin species"}, 
{"The Barn Owl has a heart-shaped facial disc"}, 
{"The Pink-headed Warbler is a rare and colorful bird found in Central America"}, 
{"The Ruppell's Vulture is the highest-flying bird, having been spotted at over 37,000 feet"}, 
{"The Eurasian Nuthatch can walk headfirst down tree trunks"}, 
{"The European Robin is not closely related to American robins"}, 
{"The Australian Lyrebird can imitate the calls of other bird species"}, 
{"The Northern Saw-whet Owl has a distinctive, repetitive tooting call"}, 
{"The Bowerbird builds elaborate structures to attract mates"}, 
{"The Potoo, native to Central and South America, has excellent camouflage"}, 
{"The Eurasian Eagle-Owl has large, striking orange eyes"}, 
{"The Gouldian Finch is also known as the Rainbow Finch due to its vibrant colors"}, 
{"The Red-crowned Crane is considered a symbol of longevity in East Asia"}, 
{"The Wilson's Bird-of-Paradise is one of the smallest birds of paradise"}, 
{"The Andean Cock-of-the-Rock has bright orange plumage and a unique courtship display"}, 
{"The Yellow-eyed Penguin is one of the rarest penguin species and is native to New Zealand"}, 
{"The Eurasian Spoonbill has a distinctive spoon-shaped bill used for feeding in shallow water"}, 
{"The Eurasian Jay is known for its habit of caching food for later consumption"}, 
{"The Painted Bunting is often described as the most beautiful bird in North America"}, 
{"The African Crowned Eagle is a powerful raptor known for its impressive hunting skills"}, 
{"The Wilson's Storm-Petrel spends most of its life at sea and only comes to land to breed"}, 
{"The Horned Puffin gets its name from the fleshy 'horns' above its eyes during the breeding season"}, 
{"The Marabou Stork has one of the largest wingspans among storks"}, 
{"The Black-crowned Night Heron is known for its nocturnal feeding habits"}, 
{"The Anna's Hummingbird can survive sub-freezing temperatures by entering a state of torpor"}, 
{"The Montezuma Oropendola builds long, hanging nests with multiple chambers"}, 
{"The Western Bluebird is known for its bright blue plumage and melodious song"}, 
{"The Eurasian Tree Sparrow is not closely related to the House Sparrow"}, 
{"The Andean Hillstar is a high-altitude hummingbird found in the Andes Mountains"}, 
{"The Northern Gannet is an expert diver and can plunge into the water from great heights"}, 
{"The European Roller is known for its striking blue and orange plumage"}, 
{"The Kea, native to New Zealand, is the world's only alpine parrot"}, 
{"The Wandering Albatross has the longest wingspan of any living bird species"}, 
{"The Western Tanager is known for its bright yellow and black plumage"}, 
{"The Hoopoe has a distinctive crown of feathers on its head and is found in Eurasia and Africa"}, 
{"The Tufted Puffin has bright orange bill plates and tufts of feathers on its head"}, 
{"The Crested Auklet has unique plumes on its head that resemble a punk rock hairstyle"}, 
{"The Andean Motmot has a distinctive racket-shaped tail and inhabits cloud forests"}, 
{"The Philippine Eagle is one of the largest and most powerful eagles in the world"}, 
{"The Eurasian Curlew has one of the longest bills among shorebirds"}, 
{"The Horned Guan is a rare and elusive bird found in the cloud forests of Central America"}, 
{"The Saddle-billed Stork has a colourful, saddle-shaped bill and is found in Africa"}, 
{"The Long-tailed Tit builds elaborate nests using spider silk for added strength"}, 
{"The Northern Lapwing is known for its acrobatic display flights"}, 
{"The Red-winged Blackbird is recognised by the bright red patches on its wings"}, 
{"The Blue Tit is a small, colourful bird known for its agility and playful behaviour"}, 
{"The Resplendent Quetzal is considered a symbol of freedom and wealth in Central America"}, 
{"The Superb Fairywren has a complex social structure with cooperative breeding"}, 
{"The Eurasian Magpie is highly intelligent and has been observed using tools"}, 
{"The Green Honeycreeper has vibrant green and blue plumage and is found in Central and South America"}, 
{"The Harlequin Duck is known for its striking black, white, and blue plumage"}, 
{"The Australian Brush-turkey builds large nests made of leaves and other vegetation"}, 
{"The Eurasian Bullfinch has a distinctive call and feeds on buds, fruits, and seeds"}, 
{"The Eurasian Coot has large, lobed feet adapted for swimming"}, 
{"The African Grey Hornbill seals itself in a tree cavity during the breeding season, leaving only a small slit for food exchange"}, 
{"The Eurasian Skylark is known for its melodious, continuous song during its display flight"}, 
{"The Violet Sabrewing is a large hummingbird with stunning violet and green plumage"}, 
{"The Aldabra Drongo is known for its mimicry, imitating the calls of other bird species"}, 
{"The Black-capped Chickadee is known for its distinctive 'chick-a-dee-dee-dee' call"}, 
{"The Victoria's Riflebird is known for its elaborate courtship display involving iridescent plumage"}, 
{"The Andean Ibis has a distinctive long, curved bill and is found in South America"}, 
{"The Northern Jacana has exceptionally long toes that help it walk on floating vegetation"}, 
{"The Magellanic Penguin is named after the explorer Ferdinand Magellan"}, 
{"The Indian Roller is known for its aerial acrobatics during courtship displays"}, 
{"The Scarlet Macaw is one of the most colourful parrots, with vibrant red, blue, and yellow plumage"}, 
{"The Eurasian Spoonbill is known for its unique spoon-shaped bill, used to sweep through shallow water to find food"}, 
{"The Snowy Owl is well-adapted to cold environments, and its feathers provide excellent insulation"}, 
{"The Yellow-crowned Night Heron is named for the distinctive yellow feathers on its head"}, 
{"The Northern Shoveler has a large spatula-shaped bill, which it uses to filter food from the water"}, 
{"The Southern Cassowary is a large flightless bird known for its striking blue and black colouration"}, 
{"The Green-cheeked Conure is a small parrot with vibrant green plumage and a playful personality"}, 
{"The Eurasian Bullfinch has a unique feeding technique, using its bill to strip buds from branches"}, 
{"The Toco Toucan has the largest bill of any toucan species, making up about one-third of its body length"}, 
{"The Blue-crowned Motmot has a distinctive racket-shaped tail and is found in Central and South America"}, 
{"The Spectacled Eider is a sea duck named for the distinctive rings around its eyes"}, 
{"The Tufted Duck is known for its tuft of feathers at the back of its head and its striking black and white plumage"}, 
{"The Andean Flamingo is one of the rarest flamingo species and is found in the high-altitude Andean plateaus"}, 
{"The Brown-throated Sunbird is a small, colourful bird found in Southeast Asia"}, 
{"The Northern Pygmy Owl is a tiny owl with a surprisingly fierce demeanour"}, 
{"The European Goldfinch is known for its red face and black and gold wings"}, 
{"The Philippine Hanging Parrot has a unique ability to sleep upside down"}, 
{"The Sooty Tern has one of the longest migratory journeys, covering thousands of miles across the ocean"}, 
{"The Wilson's Warbler is a small songbird with bright yellow plumage and a black cap"}, 
{"The Yellow Warbler is known for its vibrant yellow plumage and sweet, musical song"}, 
{"The White-cheeked Turaco has striking green and white plumage and is found in central Africa"}, 
{"The Eurasian Skylark is known for its ascending song, often performed while hovering in the air"}, 
{"The Eurasian Oystercatcher has a long, orange bill and is known for its distinctive 'piping' call"}, 
{"The Yellow-throated Warbler is a small bird with a yellow throat and a distinctive black mask"}, 
{"The Resplendent Quetzal was considered sacred by the ancient Maya and Aztec civilizations"}, 
{"The Andean Hillstar is a high-altitude hummingbird found in the Andes Mountains"}, 
{"The Yellow-eyed Junco is known for its bright yellow eyes and distinct plumage variations"}, 
{"The Palm Cockatoo is known for its drumming behaviour, using sticks and hollow trees to create rhythmic sounds"}, 
{"The Saffron Finch is a bright yellow bird with a distinctively curved bill, native to South America"}, 
{"The Masked Lapwing is known for its loud, piercing call and distinctive facial markings"}, 
{"The Sword-billed Hummingbird has a bill longer than its body, adapted for feeding on long-tubed flowers"}, 
{"The Chestnut-mandibled Toucan is one of the larger toucan species, with a colourful bill"}, 
{"The Long-tailed Manakin is known for its elaborate courtship displays, involving coordinated dancing"}, 
{"The Splendid Fairywren has striking blue and black plumage and lives in social groups"}, 
{"The Red-capped Robin has a vibrant red cap on its head and is found in Australia"}, 
{"The Crested Guan is a large bird with a distinctive crest of feathers on its head"}, 
{"The Magnificent Frigatebird has a distinctive red throat pouch, which inflates during courtship displays"}, 
{"The White-cheeked Gibbon is a primate known for its distinctive calls, often heard in the treetops"}, 
{"The Gouldian Finch is also known as the Rainbow Finch due to its vibrant plumage"}, 
{"The Pileated Woodpecker is one of the largest woodpecker species in North America"}, 
{"The Orange-bellied Parrot is one of the rarest parrot species, native to Australia"}, 
{"The Eurasian Blackcap has a melodious song and is known for its warbling call"}, 
{"The Magnificent Hummingbird has iridescent green and blue plumage and is found in Central America"}, 
{"The Northern Carmine Bee-eater is known for its vibrant carmine-red plumage"}, 
{"The Black-throated Blue Warbler has distinctive black and blue plumage"}, 
{"The Steller's Sea Eagle is one of the largest and heaviest eagles in the world"}, 
{"The Common Merganser is known for its striking black and white plumage and long, slender bill"}, 
{"The Madagascar Fish Eagle is one of the rarest eagles, native to Madagascar"}, 
{"The Helmeted Manakin is known for its acrobatic courtship displays, involving rapid wing movements"}, 
{"The Black-crowned Sparrow-lark has cryptic plumage, providing excellent camouflage in its habitat"}, 
{"The Horned Sungem is a hummingbird with a distinctive long, straight bill and iridescent plumage"}, 
{"The Harlequin Macaw is a hybrid parrot resulting from the crossbreeding of a Blue-and-gold Macaw and a Green-winged Macaw"}, 
{"The Oriental Dwarf Kingfisher is one of the smallest and most colourful kingfisher species"}, 
{"The Eurasian Griffon Vulture is known for its soaring flight and scavenging habits"}, 
{"The Blyth's Tragopan is a pheasant species with striking plumage and fleshy facial wattles"}, 
{"The Black-capped Chickadee can remember the locations of thousands of individual seeds it has hidden"}, 
{"The Blue Jay is known for its intelligence and mimicry of other bird species"}, 
{"The Eurasian Reed Warbler is a migratory bird that travels long distances between breeding and wintering grounds"}, 
{"The Southern Carmine Bee-eater is known for its spectacular aerial displays during courtship"}, 
{"The Bearded Vulture has a unique diet, primarily consisting of bones"}, 
{"The Swallow-tailed Kite is an elegant raptor known for its distinctive forked tail"}, 
{"The Long-tailed Widowbird has an exceptionally long tail, which can be more than half a metre in length"}, 
{"The Wattled Jacana has long, fleshy wattles on its face and is known for walking on floating vegetation"}, 
{"The Eurasian Nutcracker has a strong bill adapted for opening pine cones and extracting seeds"}, 
{"The Tufted Puffin has vibrant orange bills and tufts of feathers during the breeding season"}, 
{"The Himalayan Monal is one of the most colourful pheasant species, native to the Himalayas"}, 
{"The Bar-tailed Godwit has one of the longest non-stop migratory flights, covering over 7,000 miles"}, 
{"The Common Yellowthroat is known for its distinctive 'witchety-witchety-witch' song"}, 
{"The Wilson's Phalarope is one of the few bird species where the females are more brightly coloured than the males"}, 
{"The Snowy-crowned Robin-Chat has a distinctive white crown and is found in sub-Saharan Africa"}, 
{"The White-throated Sparrow has a song that sounds like 'Oh sweet Canada Canada'"}, 
{"The Raggiana Bird-of-Paradise is known for its elaborate courtship displays in Papua New Guinea"}, 
{"The Blue-winged Kookaburra is a large kingfisher with a striking blue and white plumage"}, 
{"The Pied Kingfisher hovers over the water before diving to catch its prey"}, 
{"The Eurasian Blue Tit is a small bird with bright blue and yellow plumage"}, 
{"The Red-legged Seriema is a ground-dwelling bird found in South America with strong legs adapted for running"}, 
{"The African Fish Eagle is known for its distinctive call, often described as a 'haunting scream'"}, 
{"The Crested Owl has distinctive 'ear tufts' that are not actually ears"}, 
{"The Philippine Serpent Eagle is a raptor found in the Philippines and is known for hunting snakes"}, 
{"The Lilac-breasted Roller is known for its stunning plumage and aerial acrobatics"}, 
{"The Cape Barren Goose has striking black and white plumage and is native to Australia"}, 
{"The Great Blue Turaco has vibrant green and blue plumage and is found in central Africa"}, 
{"The Northern Fulmar is a seabird known for its ability to excrete a foul-smelling stomach oil as a defence mechanism"}, 
{"The Black-throated Magpie-Jay is a vocal and social bird found in Central America"}, 
{"The Red-faced Cormorant has bright red facial skin during the breeding season"}, 
{"The White-tailed Tropicbird has a long, white tail streamer and is found in tropical oceans"}, 
{"The White-eared Hummingbird is a small hummingbird with a distinctive white patch behind its eye"}, 
{"The Eurasian Green Woodpecker has a distinctive laughing call"}, 
{"The Eastern Whip-poor-will is known for its repetitive 'whip-poor-will' call during the breeding season"}, 
{"The Long-tailed Duck has one of the longest diving depths among ducks"}, 
{"The Guianan Cock-of-the-Rock has bright orange plumage and is known for its lekking displays"}, 
{"The Eurasian Cuckoo is a brood parasite, laying its eggs in the nests of other bird species"}, 
{"The Rosy-faced Lovebird is a small parrot with a bright pink face"}, 
{"The African Grey Hornbill has a long, down-curved bill and is found in sub-Saharan Africa"}, 
{"The White-rumped Shama has a melodious and varied song"}, 
{"The Southern Ground Hornbill is known for its distinctive red facial and throat skin"}, 
{"The Gila Woodpecker is adapted to desert life and nests in saguaro cacti"}, 
{"The Oriental Pratincole is a migratory bird that breeds in Asia and winters in Australia"}, 
{"The Northern Jacana has exceptionally long toes that allow it to walk on floating vegetation"}, 
{"The Amazon Kingfisher is a large kingfisher species found in the Americas"}, 
{"The Grey-headed Kingfisher has striking grey and orange plumage and is found in Africa"}, 
{"The Pied Crow is highly adaptable and can be found in a variety of habitats in Africa"}, 
{"The Great Grey Owl is the largest owl by length but not by weight"}, 
{"The Collared Aracari is a toucan species known for its distinctive black and white collar"}, 
{"The Red-billed Quelea is considered the most abundant wild bird species in the world"}, 
{"The Madagascar Bee-eater has striking plumage and is native to Madagascar and nearby islands"}, 
{"The Grey Crowned Crane is known for its elaborate courtship dances"}, 
{"The Elegant Trogon is a colourful bird found in tropical and subtropical forests"}, 
{"The Australian Pelican has the longest bill of any bird, measuring up to 18 inches (46 cm)"}, 
{"The Eurasian Hobby is a small falcon known for its swift and agile flight"}, 
{"The Superb Starling has glossy, iridescent plumage and is found in East Africa"}, 
{"The Red Knot is known for its long-distance migratory journeys, covering thousands of miles"}, 
{"The Eastern Yellow Robin is a small bird found in Australia with a striking yellow belly"}, 
{"The Palmchat is the national bird of the Dominican Republic and is known for its communal nesting habits"}, 
{"The Galah is a pink and grey cockatoo found in Australia and is known for its playful behaviour"}, 
{"The Purple Finch's plumage can vary from raspberry red to a more subdued brown"}, 
{"The African Grey Parrot is one of the most intelligent bird species and is a popular pet"}, 
{"The Greater Painted-Snipe has a unique feeding behaviour, probing for prey with its long bill"}, 
{"The Blue-grey Tanager is a colourful bird found in Central and South America"}, 
{"The Wood Stork has a distinctive bald head and is found in wetlands in the Americas"}, 
{"The Eurasian Sparrowhawk is known for its agility and swift flight through dense vegetation"}, 
{"The Verreaux's Eagle is a large bird of prey found in sub-Saharan Africa"}, 
{"The Eurasian Wigeon is a dabbling duck with a distinctive whistling call"}, 
{"The Pink Robin is a small, colourful bird found in Australia with a pink breast"}, 
{"The Eurasian Golden Oriole has striking yellow and black plumage"}, 
{"The Chestnut-crowned Antpitta is known for its distinctive song and secretive behaviour"}, 
{"The Brown-headed Cowbird is a brood parasite that lays its eggs in the nests of other bird species"}, 
{"The Red-crowned Crane is one of the rarest cranes and is considered a symbol of luck in Japan"}, 
{"The Indian Roller is also known as the 'Blue Jay' and is found in South Asia"}, 
{"The Black Guillemot has distinctive black and white plumage and bright red legs"}, 
{"The Northern Raven is known for its intelligence and problem-solving abilities"}, 
{"The Collared Owlet is a small owl with a distinctive white 'collar' on its nape"}, 
{"The Red-necked Phalarope has reversed sexual roles, with females being more brightly coloured"}, 
{"The Sanderling is a small shorebird known for its quick, running movements on sandy beaches"}, 
{"The Common Stonechat is named for its habit of perching on stones and other elevated spots"}, 
{"The Secretary Bird is a large bird of prey found in sub-Saharan Africa"}, 
{"The Blue-crowned Hanging Parrot has a vibrant blue crown and is found in Southeast Asia"}, 
{"The White-headed Woodpecker is known for its preference for feeding on pine seeds"}, 
{"The White-rumped Snowfinch is a hardy bird found in high-altitude mountainous regions"}, 
{"The Australian Pratincole is a shorebird that breeds in Australia and migrates to Southeast Asia"}, 
{"The Black-winged Kite is known for its hovering flight while hunting for prey"}, 
{"The Red-vented Bulbul has a distinctive red patch on its lower belly"}, 
{"The Great Potoo is a nocturnal bird known for its excellent camouflage during the day"}, 
{"The Marbled Teal is a dabbling duck with intricate marbled patterns on its plumage"}, 
{"The Masked Booby has a distinctive black mask around its eyes and is found in tropical oceans"}, 
{"The Northern Harrier is known for its low, coursing flight over open fields"}, 
{"The White-necked Jacobin is a large hummingbird with striking white and iridescent blue plumage"}, 
{"The Laughing Dove has a distinctive soft, cooing call"}, 
{"The White-faced Whistling Duck is known for its whistling calls and distinctive facial markings"}
};