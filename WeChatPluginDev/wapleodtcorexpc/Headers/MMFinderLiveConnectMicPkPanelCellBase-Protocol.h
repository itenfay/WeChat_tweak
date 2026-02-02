//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@protocol MMFinderLiveConnectMicPkPanelCellBase <NSObject>
+ (double)cellHeight;
+ (NSString *)ReuseIdentifier;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@end

