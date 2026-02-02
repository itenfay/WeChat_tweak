//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanCombineClientReportExtraInfo : NSObject
{
    long long _modelVersion;
    long long _itemStatus;
    long long _itemCategoryId;
    long long _imageEncodeType;
    long long _imageEncodeSize;
}

@property(nonatomic) long long imageEncodeSize; // @synthesize imageEncodeSize=_imageEncodeSize;
@property(nonatomic) long long imageEncodeType; // @synthesize imageEncodeType=_imageEncodeType;
@property(nonatomic) long long itemCategoryId; // @synthesize itemCategoryId=_itemCategoryId;
@property(nonatomic) long long itemStatus; // @synthesize itemStatus=_itemStatus;
@property(nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;

@end

