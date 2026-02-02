//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdvertiseFinderTopicResImageModel : NSObject
{
    NSString *_mid;
    NSString *_url;
    NSString *_thumb;
    double _width;
    double _height;
    double _totalSize;
}

- (void).cxx_destruct;
@property(nonatomic) double totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;

@end

