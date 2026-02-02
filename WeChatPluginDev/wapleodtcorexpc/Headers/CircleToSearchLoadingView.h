//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView;

@interface CircleToSearchLoadingView
{
    MMUIImageView *_scanLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *scanLineView; // @synthesize scanLineView=_scanLineView;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect)arg1;

@end

