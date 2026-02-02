//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol TextStateIcon <NSObject, NSCopying>
- (UIColor *)unreadTextColor;
- (NSString *)bigImageURLString;
- (NSString *)imageURLString;
- (_Bool)useOriginImage;
- (_Bool)isValidForPublish;
- (_Bool)isValidForShow;
- (_Bool)isCustom;
- (void)setCustomIconDescription:(NSString *)arg1;
- (NSString *)withMeClusterDescription;
- (NSString *)selfStatusDescription;
- (NSString *)otherClusterDescription;
- (NSString *)clusterDescription;
- (NSString *)iconDescription;
- (unsigned int)type;
- (NSString *)iconId;
- (id)copy;
@end

