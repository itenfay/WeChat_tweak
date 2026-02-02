//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSMutableArray, WSReportInfo;

@class WXPBGeneratedMessage;

@interface BusinessResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bizResults; // @dynamic bizResults;
@property(retain, nonatomic) NSData *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSMutableArray *docResults; // @dynamic docResults;
@property(retain, nonatomic) NSMutableArray *pardusResults; // @dynamic pardusResults;
@property(retain, nonatomic) WSReportInfo *reportInfo; // @dynamic reportInfo;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *weappResults; // @dynamic weappResults;
@property(retain, nonatomic) NSMutableArray *widgetResults; // @dynamic widgetResults;

@end

