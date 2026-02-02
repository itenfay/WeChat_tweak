//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TPRichMediaFeature : NSObject
{
    _Bool _isSelected;
    NSString *_featureType;
    NSArray *_binding;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSArray *binding; // @synthesize binding=_binding;
@property(copy, nonatomic) NSString *featureType; // @synthesize featureType=_featureType;

@end

