//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppmsgExposureUrlInfo : NSObject
{
    unsigned int _itemShowType;
    unsigned int _itemShowTypeFrom;
    NSString *_url;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int itemShowTypeFrom; // @synthesize itemShowTypeFrom=_itemShowTypeFrom;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

