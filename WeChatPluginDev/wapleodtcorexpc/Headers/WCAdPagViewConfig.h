//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdPagViewConfig : NSObject
{
    int _scaleMode;
    int _repeatCount;
}

@property(nonatomic) int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) int scaleMode; // @synthesize scaleMode=_scaleMode;
- (id)description;

@end

