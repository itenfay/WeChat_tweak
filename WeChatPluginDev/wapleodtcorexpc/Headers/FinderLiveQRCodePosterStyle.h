//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveQRCodePosterStyle : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *authIconUrl; // @dynamic authIconUrl;
@property(retain, nonatomic) NSString *bgSubType; // @dynamic bgSubType;
@property(nonatomic) int bgType; // @dynamic bgType;
@property(retain, nonatomic) NSString *fgColor; // @dynamic fgColor;
@property(retain, nonatomic) NSString *finderLogoColor; // @dynamic finderLogoColor;
@property(nonatomic) unsigned int styleId; // @dynamic styleId;

@end

