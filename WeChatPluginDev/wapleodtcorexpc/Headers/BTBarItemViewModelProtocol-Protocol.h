//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTBaseBarItemView, NSString;

@protocol BTBarItemViewModelProtocol <NSObject>
+ (NSString *)itemViewClassName;
@property(nonatomic) __weak BTBaseBarItemView *barItemView;
@property(readonly, nonatomic) _Bool hasNewMemberContent;
@property(readonly, nonatomic) _Bool isMember;
@property(readonly, nonatomic) _Bool isFinder;
@property(nonatomic) _Bool hasLine;
@property(readonly, nonatomic) _Bool isBrandLiving;
@property(readonly, nonatomic) _Bool hasNewFinderLiving;
@property(readonly, nonatomic) _Bool hasArrow;
@property(readonly, nonatomic) _Bool hasGreenDot;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headImgUrl;
@end

