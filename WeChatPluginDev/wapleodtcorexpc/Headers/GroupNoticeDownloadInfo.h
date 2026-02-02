//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GroupNoticeItem, GroupNoticeItemDataField, NSString;

@interface GroupNoticeDownloadInfo : NSObject
{
    _Bool _isThumb;
    GroupNoticeItemDataField *_data;
    GroupNoticeItem *_item;
    NSString *_fileKey;
}

+ (id)downloadInfoWithData:(id)arg1 thumb:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(nonatomic) __weak GroupNoticeItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) GroupNoticeItemDataField *data; // @synthesize data=_data;

@end

