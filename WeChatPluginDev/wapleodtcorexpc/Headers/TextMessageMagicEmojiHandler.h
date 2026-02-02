//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CommonMessageViewModel, NSDictionary;

@interface TextMessageMagicEmojiHandler : NSObject
{
    CommonMessageViewModel *_viewModel;
    NSDictionary *_extInfo;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak CommonMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)onGetMetaWithId:(id)arg1 needFrame:(_Bool)arg2;

@end

