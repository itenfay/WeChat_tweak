//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderKVContentModel : NSObject
{
    _Bool _useOriginalNode;
    NSString *_reportContent;
    unsigned long long _renderSuc;
    unsigned long long _textLineNumber;
    unsigned long long _remakeFlag;
    NSString *_reddotShowContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reddotShowContent; // @synthesize reddotShowContent=_reddotShowContent;
@property(nonatomic) _Bool useOriginalNode; // @synthesize useOriginalNode=_useOriginalNode;
@property(nonatomic) unsigned long long remakeFlag; // @synthesize remakeFlag=_remakeFlag;
@property(nonatomic) unsigned long long textLineNumber; // @synthesize textLineNumber=_textLineNumber;
@property(nonatomic) unsigned long long renderSuc; // @synthesize renderSuc=_renderSuc;
@property(copy, nonatomic) NSString *reportContent; // @synthesize reportContent=_reportContent;
- (id)init;

@end

