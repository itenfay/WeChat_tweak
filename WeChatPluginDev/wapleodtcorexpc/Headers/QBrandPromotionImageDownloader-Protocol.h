//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol QBrandPromotionImageOwner;

@protocol QBrandPromotionImageDownloader <NSObject>
- (void)cancelRequestWithViewItem:(id <QBrandPromotionImageOwner>)arg1;
- (void)requestLogoImageWithViewItem:(id <QBrandPromotionImageOwner>)arg1;
@end

