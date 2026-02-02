//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, QIndoorInfo;

@protocol QAnnotation <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (QIndoorInfo *)indoorInfo;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (NSString *)subtitle;
- (NSString *)title;
@end

