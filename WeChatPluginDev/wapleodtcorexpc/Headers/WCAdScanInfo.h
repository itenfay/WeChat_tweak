//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdScanInfo : NSObject
{
    int _scanGestureType;
    NSString *_bgView;
    NSString *_desc;
    NSString *_detectSucIcon;
    NSString *_descIcon;
}

- (void).cxx_destruct;
@property(nonatomic) int scanGestureType; // @synthesize scanGestureType=_scanGestureType;
@property(retain, nonatomic) NSString *descIcon; // @synthesize descIcon=_descIcon;
@property(retain, nonatomic) NSString *detectSucIcon; // @synthesize detectSucIcon=_detectSucIcon;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *bgView; // @synthesize bgView=_bgView;
- (id)fetchAllImageUrls;
- (_Bool)valid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

