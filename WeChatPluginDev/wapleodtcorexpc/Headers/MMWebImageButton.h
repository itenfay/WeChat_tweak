//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebButtonChainModel, NSString, NSURL, UIImage;

@interface MMWebImageButton
{
    UIImage *_defaultImage;
    NSURL *_url;
}

+ (_Bool)CanLoadImage:(id)arg1;
+ (CDUnknownBlockType)zz_create;
- (void).cxx_destruct;
- (void)dealloc;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setDefaultImage:(id)arg1;
- (_Bool)setImageURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) MMWebButtonChainModel *zz_setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

