//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderWindowProductInfo_DetailPage, NSString;

@interface FinderGetWindowProductProfileCardInfoResponse_SimpleProduct : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *fullPage; // @dynamic fullPage;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(nonatomic) unsigned long long productId; // @dynamic productId;
@property(nonatomic) unsigned int status; // @dynamic status;

@end

