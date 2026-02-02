//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCArrowDownIconStyle : NSObject
{
    NSString *_iconUrl;
    double _layoutWidth;
    double _layoutHeight;
    double _paddingBottom;
}

- (void).cxx_destruct;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

