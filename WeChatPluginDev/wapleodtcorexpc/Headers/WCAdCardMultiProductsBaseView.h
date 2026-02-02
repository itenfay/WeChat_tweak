//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCAdCardMultiProductsScreenDelegate;

@interface WCAdCardMultiProductsBaseView
{
    id <WCAdCardMultiProductsScreenDelegate> _delegate;
    struct CGSize _previousSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdCardMultiProductsScreenDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize previousSize; // @synthesize previousSize=_previousSize;
- (void)restorePrevioisCenterWith:(id)arg1;
- (void)saveCurrentCenterWith:(id)arg1;
- (void)resizeSubviewsWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

