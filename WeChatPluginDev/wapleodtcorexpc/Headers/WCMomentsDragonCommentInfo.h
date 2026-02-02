//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMomentsDragonCommentInfo : NSObject
{
    unsigned int _fireworkType;
    unsigned int _fireworkSeed;
    NSString *_fireworkText;
    NSString *_fireworkEmojiKey;
}

+ (void)initialize;
+ (void)PBArrayAdd_fireworkSeed;
+ (void)PBArrayAdd_fireworkEmojiKey;
+ (void)PBArrayAdd_fireworkText;
+ (void)PBArrayAdd_fireworkType;
+ (id)dragonCommentInfoFromServerBuffer:(id)arg1;
+ (id)dragonCommentInfoFromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int fireworkSeed; // @synthesize fireworkSeed=_fireworkSeed;
@property(copy, nonatomic) NSString *fireworkEmojiKey; // @synthesize fireworkEmojiKey=_fireworkEmojiKey;
@property(copy, nonatomic) NSString *fireworkText; // @synthesize fireworkText=_fireworkText;
@property(nonatomic) unsigned int fireworkType; // @synthesize fireworkType=_fireworkType;
@property(readonly, copy, nonatomic) NSString *fireworkID;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;
- (id)toServerBuffer;
- (id)toServerObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

