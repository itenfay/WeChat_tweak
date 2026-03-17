//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TextStateCardListDelegate <NSObject>

@optional
- (_Bool)shouldShowLocationDistance;
- (void)onChangeToCardAtIndex:(unsigned long long)arg1;
@end

