//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMLiveCompleteViewControllerDelegate;

@interface MMLiveCompleteViewController
{
    _Bool _needAutoRotateToPortrait;
    long long _currDeviceOrientation;
    id <MMLiveCompleteViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveCompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currDeviceOrientation; // @synthesize currDeviceOrientation=_currDeviceOrientation;
@property(nonatomic) _Bool needAutoRotateToPortrait; // @synthesize needAutoRotateToPortrait=_needAutoRotateToPortrait;

@end

