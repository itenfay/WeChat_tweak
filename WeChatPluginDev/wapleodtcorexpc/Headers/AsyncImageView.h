//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSMutableData, NSString, NSURLConnection, UIImageView;
@protocol AsyncImageViewDelegate;

@interface AsyncImageView
{
    NSURLConnection *connection;
    NSMutableData *m_data;
    MMUIActivityIndicatorView *m_activityIndicator;
    UIImageView *m_imageView;
    long long m_contentMode;
    id <AsyncImageViewDelegate> _delegate;
    NSString *m_nsNotifyKey;
    NSString *m_url;
    _Bool m_showLoadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsNotifyKey; // @synthesize m_nsNotifyKey;
@property(nonatomic) __weak id <AsyncImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long m_contentMode; // @synthesize m_contentMode;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
@property(readonly, nonatomic) NSString *m_url;
- (id)image;
- (void)setImage:(id)arg1;
- (void)loadImageFromHttpCacheMgr:(id)arg1 Type:(unsigned int)arg2;
- (void)loadImageFromHttpCacheMgr:(id)arg1 Type:(unsigned int)arg2 showLoadingView:(_Bool)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)description;

@end

