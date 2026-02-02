//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WACameraScanItemParam : NSObject
{
    _Bool _isHideAlbumBtn;
    NSString *_extInfo;
    NSString *_descStr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHideAlbumBtn; // @synthesize isHideAlbumBtn=_isHideAlbumBtn;
@property(retain, nonatomic) NSString *descStr; // @synthesize descStr=_descStr;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;

@end

