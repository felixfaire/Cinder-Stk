#pragma once

#include "stk/include/Stk.h"

#include "stk/include/ADSR.h"
#include "stk/include/Asymp.h"
#include "stk/include/BandedWG.h"
#include "stk/include/BeeThree.h"
#include "stk/include/BiQuad.h"
#include "stk/include/Blit.h"
#include "stk/include/BlitSaw.h"
#include "stk/include/BlitSquare.h"
#include "stk/include/BlowBotl.h"
#include "stk/include/BlowHole.h"
#include "stk/include/Bowed.h"
#include "stk/include/BowTable.h"
#include "stk/include/Brass.h"
#include "stk/include/Chorus.h"
#include "stk/include/Clarinet.h"
#include "stk/include/Cubic.h"
#include "stk/include/Delay.h"
#include "stk/include/DelayA.h"
#include "stk/include/DelayL.h"
#include "stk/include/Drummer.h"
#include "stk/include/Echo.h"
#include "stk/include/Effect.h"
#include "stk/include/Envelope.h"
#include "stk/include/FileLoop.h"
#include "stk/include/FileRead.h"
#include "stk/include/FileWrite.h"
#include "stk/include/FileWvIn.h"
#include "stk/include/FileWvOut.h"
#include "stk/include/Filter.h"
#include "stk/include/Fir.h"
#include "stk/include/Flute.h"
#include "stk/include/FM.h"
#include "stk/include/FMVoices.h"
#include "stk/include/FormSwep.h"
#include "stk/include/FreeVerb.h"
#include "stk/include/Function.h"
#include "stk/include/Generator.h"
#include "stk/include/Granulate.h"
#include "stk/include/HevyMetl.h"
#include "stk/include/Iir.h"
#include "stk/include/Instrmnt.h"
#include "stk/include/JCRev.h"
#include "stk/include/JetTable.h"
#include "stk/include/LentPitShift.h"
#include "stk/include/Mandolin.h"
#include "stk/include/Mesh2D.h"
#include "stk/include/MidiFileIn.h"
#include "stk/include/Modal.h"
#include "stk/include/ModalBar.h"
#include "stk/include/Modulate.h"
#include "stk/include/Moog.h"
#include "stk/include/Noise.h"
#include "stk/include/NRev.h"
#include "stk/include/OnePole.h"
#include "stk/include/OneZero.h"
#include "stk/include/PercFlut.h"
#include "stk/include/Phonemes.h"
#include "stk/include/PitShift.h"
#include "stk/include/Plucked.h"
#include "stk/include/PoleZero.h"
#include "stk/include/PRCRev.h"
#include "stk/include/ReedTable.h"
#include "stk/include/Resonate.h"
#include "stk/include/Rhodey.h"
#include "stk/include/Sampler.h"
#include "stk/include/Saxofony.h"
#include "stk/include/Shakers.h"
#include "stk/include/Simple.h"
#include "stk/include/SineWave.h"
#include "stk/include/SingWave.h"
#include "stk/include/Sitar.h"
#include "stk/include/Skini.h"
#include "stk/include/Sphere.h"
#include "stk/include/StifKarp.h"
#include "stk/include/TapDelay.h"
#include "stk/include/TubeBell.h"
#include "stk/include/Twang.h"
#include "stk/include/TwoPole.h"
#include "stk/include/TwoZero.h"
#include "stk/include/Vector3D.h"
#include "stk/include/Voicer.h"
#include "stk/include/VoicForm.h"
#include "stk/include/Whistle.h"
#include "stk/include/Wurley.h"

#include "cistk/Nodes.h"

namespace cistk {

//! Uitility method that searchs for the stk's rawwaves folder, first within an app assets directory, then relative to the repo (useful during development)
void initRawwavePath();

} // namespace cistk