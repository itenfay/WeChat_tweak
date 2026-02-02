//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmojiInfoObj, NSMutableSet, NSString;

@interface EmoticonDownloadInfo : NSObject
{
    _Bool _isDownloading;
    NSString *_key;
    EmojiInfoObj *_emojiInfoObj;
    NSMutableSet *_msgWrapSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) NSMutableSet *msgWrapSet; // @synthesize msgWrapSet=_msgWrapSet;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)description;

@end

