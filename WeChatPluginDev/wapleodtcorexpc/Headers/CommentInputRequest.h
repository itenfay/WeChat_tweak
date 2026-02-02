//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber;

@interface CommentInputRequest : NSObject
{
    NSNumber *_show;
    FlutterStandardTypedData *_commentInfo;
    NSNumber *_canSwitch;
    NSNumber *_useIdentityType;
    NSNumber *_enableMention;
    NSNumber *_showInputBar;
    NSNumber *_disableShowKeyboard;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithShow:(id)arg1 commentInfo:(id)arg2 canSwitch:(id)arg3 useIdentityType:(id)arg4 enableMention:(id)arg5 showInputBar:(id)arg6 disableShowKeyboard:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *disableShowKeyboard; // @synthesize disableShowKeyboard=_disableShowKeyboard;
@property(retain, nonatomic) NSNumber *showInputBar; // @synthesize showInputBar=_showInputBar;
@property(retain, nonatomic) NSNumber *enableMention; // @synthesize enableMention=_enableMention;
@property(retain, nonatomic) NSNumber *useIdentityType; // @synthesize useIdentityType=_useIdentityType;
@property(retain, nonatomic) NSNumber *canSwitch; // @synthesize canSwitch=_canSwitch;
@property(retain, nonatomic) FlutterStandardTypedData *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) NSNumber *show; // @synthesize show=_show;
- (id)toList;

@end

