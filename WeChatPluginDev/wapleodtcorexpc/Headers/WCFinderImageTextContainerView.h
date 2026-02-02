//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIImageView;
@protocol WCFinderImageTextContainerViewDelegate;

@interface WCFinderImageTextContainerView
{
    RichTextView *_richTextView;
    UIImageView *_imageView;
    long long _type;
    id <WCFinderImageTextContainerViewDelegate> _delegate;
    NSString *_imageName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) __weak id <WCFinderImageTextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)enableClick:(_Bool)arg1 disableColor:(id)arg2;
- (void)onClickTapGes;
- (void)updateWithImageName:(id)arg1 content:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2 delegate:(id)arg3;

@end

