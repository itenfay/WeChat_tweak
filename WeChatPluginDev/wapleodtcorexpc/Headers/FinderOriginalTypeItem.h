//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiteAppParam, NSMutableArray, NSString, OriginalMediaLimit;

@interface FinderOriginalTypeItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) FinderLiteAppParam *jumpLiteApp; // @dynamic jumpLiteApp;
@property(retain, nonatomic) OriginalMediaLimit *mediaLimit; // @dynamic mediaLimit;
@property(nonatomic) unsigned int originalType; // @dynamic originalType;
@property(retain, nonatomic) NSMutableArray *supportMediaTypes; // @dynamic supportMediaTypes;

@end

