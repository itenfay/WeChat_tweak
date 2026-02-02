//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol VideoHintTopViewDelegate;

@interface VideoHintTopView
{
    id <VideoHintTopViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VideoHintTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickClose:(id)arg1;
- (void)onClickMore:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

