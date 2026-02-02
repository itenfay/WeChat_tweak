//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@protocol WCPayWalletCollectionViewFlowLayoutDelegate;

@interface WCPayWalletCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    id <WCPayWalletCollectionViewFlowLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayWalletCollectionViewFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (id)initWithDelegate:(id)arg1;

@end

