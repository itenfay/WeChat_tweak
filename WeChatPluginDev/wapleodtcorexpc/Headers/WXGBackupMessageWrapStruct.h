//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BakChatMsgItem, NSArray;

@interface WXGBackupMessageWrapStruct : NSObject
{
    BakChatMsgItem *_bakchatMsgItem;
    NSArray *_mediaArray;
    long long _msgSvrID;
}

- (void).cxx_destruct;
@property(nonatomic) long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(retain, nonatomic) NSArray *mediaArray; // @synthesize mediaArray=_mediaArray;
@property(retain, nonatomic) BakChatMsgItem *bakchatMsgItem; // @synthesize bakchatMsgItem=_bakchatMsgItem;

@end

