//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WCEditVideoColorConfig : NSObject
{
    NSDictionary *_colorMap;
}

+ (id)getColorArray;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *colorMap; // @synthesize colorMap=_colorMap;
- (void)setupDefaultColorMap;
- (id)stokeStyleLayerColorWithMainColor:(id)arg1;
- (id)stokeStyleTextColorWithMainColor:(id)arg1;
- (id)init;
- (void)setupColorMapForEmotion;

@end

