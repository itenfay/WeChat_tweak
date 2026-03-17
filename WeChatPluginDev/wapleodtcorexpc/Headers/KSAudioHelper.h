//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KSAudioHelper : NSObject
{
}

+ (unsigned int)hintForFileExtension:(id)arg1;
+ (unsigned int)getAudioFormatByFileHeader:(id)arg1 fileExtension:(id)arg2;
+ (id)guessAudioFileType:(id)arg1 propertyId:(unsigned int)arg2;
+ (id)formatOSStatus:(int)arg1;

@end

