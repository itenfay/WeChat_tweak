//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmojiInfoObj, NSString;

@interface EmoticonMd5OcrResultInfo : NSObject
{
    _Bool _isWxamData;
    unsigned int _resultVersion;
    NSString *_meaning;
    NSString *_md5;
    EmojiInfoObj *_emojiInfoObj;
    unsigned long long _lastUnsafeTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_isWxamData;
+ (void)PBArrayAdd_lastUnsafeTime;
+ (void)PBArrayAdd_meaning;
+ (void)PBArrayAdd_resultVersion;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastUnsafeTime; // @synthesize lastUnsafeTime=_lastUnsafeTime;
@property(nonatomic) unsigned int resultVersion; // @synthesize resultVersion=_resultVersion;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool isWxamData; // @synthesize isWxamData=_isWxamData;
@property(retain, nonatomic) NSString *meaning; // @synthesize meaning=_meaning;
@property(readonly, nonatomic) _Bool needRecal;
- (_Bool)isUnsafeTimeExpiredWithCurTime:(unsigned long long)arg1;
@property(nonatomic) _Bool isUnsafe; // @dynamic isUnsafe;
@property(readonly, nonatomic) _Bool isResultValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

