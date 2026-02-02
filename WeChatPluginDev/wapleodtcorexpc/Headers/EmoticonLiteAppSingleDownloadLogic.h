//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmojiInfoObj, NSString;

@interface EmoticonLiteAppSingleDownloadLogic : NSObject
{
    _Bool _active;
    CDUnknownBlockType _sucBlock;
    CDUnknownBlockType _failBlock;
    EmojiInfoObj *_emojiInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) EmojiInfoObj *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType sucBlock; // @synthesize sucBlock=_sucBlock;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imagePath:(id)arg2;
- (void)startDownload;
- (id)initWithDownloadWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

