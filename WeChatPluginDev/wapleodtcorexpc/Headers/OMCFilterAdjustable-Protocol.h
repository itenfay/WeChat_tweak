//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol OMCFilterAdjustable <NSObject>
@property(readonly, nonatomic) _Bool isFilterAdjusted;
@property(nonatomic) float filterIntensity;
@property(retain, nonatomic) NSString *filterOptions;
@property(nonatomic) _Bool isFilterEnabled;
@property(retain, nonatomic) NSString *filterID;
@end

