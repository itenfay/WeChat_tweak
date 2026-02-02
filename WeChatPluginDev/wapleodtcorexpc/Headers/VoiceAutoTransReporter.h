//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface VoiceAutoTransReporter : NSObject
{
    unsigned int _userScollCount;
    int _transEndType;
    NSMutableSet *_voiceIds;
}

- (void).cxx_destruct;
@property(nonatomic) int transEndType; // @synthesize transEndType=_transEndType;
@property(retain, nonatomic) NSMutableSet *voiceIds; // @synthesize voiceIds=_voiceIds;
@property(nonatomic) unsigned int userScollCount; // @synthesize userScollCount=_userScollCount;
- (void)report;
- (void)addVoiceIdWithMsg:(id)arg1;
- (void)userDidScroll;
- (id)init;

@end

