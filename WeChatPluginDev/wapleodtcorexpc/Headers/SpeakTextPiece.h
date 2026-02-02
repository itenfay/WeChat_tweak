//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SpeakTextPiece : NSObject
{
    _Bool _endFlag;
    unsigned int _index;
    unsigned int _voiceFormat;
    NSData *_voiceData;
}

+ (void)initialize;
+ (void)PBArrayAdd_endFlag;
+ (void)PBArrayAdd_voiceData;
+ (void)PBArrayAdd_voiceFormat;
+ (void)PBArrayAdd_index;
- (void).cxx_destruct;
@property(nonatomic) _Bool endFlag; // @synthesize endFlag=_endFlag;
@property(retain, nonatomic) NSData *voiceData; // @synthesize voiceData=_voiceData;
@property(nonatomic) unsigned int voiceFormat; // @synthesize voiceFormat=_voiceFormat;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

