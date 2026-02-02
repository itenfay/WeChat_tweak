//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AppPatMessageViewModel, NSString, PatWrap;

@interface PatMessageMagicEmojiHandler : NSObject
{
    AppPatMessageViewModel *_viewModel;
    PatWrap *_patWrap;
    NSString *_chatUserName;
    NSString *_emojiKey;
    NSString *_emojiName;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *emojiName; // @synthesize emojiName=_emojiName;
@property(retain, nonatomic) NSString *emojiKey; // @synthesize emojiKey=_emojiKey;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(retain, nonatomic) PatWrap *patWrap; // @synthesize patWrap=_patWrap;
@property(nonatomic) __weak AppPatMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)isValid;
- (id)onGetMetaWithId:(id)arg1 needFrame:(_Bool)arg2;

@end

