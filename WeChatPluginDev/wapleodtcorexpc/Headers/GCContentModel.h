//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatroomMsgTpl, NSMutableDictionary, NSMutableSet, NSString;

@interface GCContentModel : NSObject
{
    _Bool _supportLink;
    _Bool _isPureText;
    NSString *_contentStr;
    NSMutableDictionary *_linkJumpInfoDict;
    NSString *_sysTitleStr;
    ChatroomMsgTpl *_chatroomMsgTpl;
    NSMutableSet *_userNameSet;
    NSMutableDictionary *_userNameDict;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPureText; // @synthesize isPureText=_isPureText;
@property(retain, nonatomic) NSMutableDictionary *userNameDict; // @synthesize userNameDict=_userNameDict;
@property(retain, nonatomic) NSMutableSet *userNameSet; // @synthesize userNameSet=_userNameSet;
@property(retain, nonatomic) ChatroomMsgTpl *chatroomMsgTpl; // @synthesize chatroomMsgTpl=_chatroomMsgTpl;
@property(retain, nonatomic) NSString *sysTitleStr; // @synthesize sysTitleStr=_sysTitleStr;
@property(retain, nonatomic) NSMutableDictionary *linkJumpInfoDict; // @synthesize linkJumpInfoDict=_linkJumpInfoDict;
@property(nonatomic) _Bool supportLink; // @synthesize supportLink=_supportLink;
@property(retain, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(readonly, nonatomic) NSString *textThatCanCopy;

@end

