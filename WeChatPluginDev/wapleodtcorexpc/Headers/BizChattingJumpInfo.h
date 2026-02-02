//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BizChattingJumpInfo : NSObject
{
    NSString *_userName;
    NSNumber *_openChattingFromScene;
    NSNumber *_chattingSubScene;
    NSNumber *_clickPos;
    NSNumber *_msgLocalId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUserName:(id)arg1 openChattingFromScene:(id)arg2 chattingSubScene:(id)arg3 clickPos:(id)arg4 msgLocalId:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSNumber *clickPos; // @synthesize clickPos=_clickPos;
@property(retain, nonatomic) NSNumber *chattingSubScene; // @synthesize chattingSubScene=_chattingSubScene;
@property(retain, nonatomic) NSNumber *openChattingFromScene; // @synthesize openChattingFromScene=_openChattingFromScene;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toList;

@end

