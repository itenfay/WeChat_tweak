//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMomentsInputAreaReportInfo : NSObject
{
    unsigned long long _contextType;
    NSString *_sessionID;
    NSString *_feedID;
    NSString *_commentID;
    unsigned long long _opResult;
    unsigned long long _wordCount;
    unsigned long long _lineCount;
    double _contextScreenHeightRatio;
    unsigned long long _wordLimiedToastCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long wordLimiedToastCount; // @synthesize wordLimiedToastCount=_wordLimiedToastCount;
@property(nonatomic) double contextScreenHeightRatio; // @synthesize contextScreenHeightRatio=_contextScreenHeightRatio;
@property(nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
@property(nonatomic) unsigned long long wordCount; // @synthesize wordCount=_wordCount;
@property(nonatomic) unsigned long long opResult; // @synthesize opResult=_opResult;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
- (void)report;
- (id)genReportString;
- (id)initWithContextType:(unsigned long long)arg1;

@end

