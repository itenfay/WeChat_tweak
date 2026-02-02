//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnProgressInfo;

@interface CdnPreloadEndInfo : NSObject
{
    int _retCode;
    CdnProgressInfo *_progressInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnProgressInfo *progressInfo; // @synthesize progressInfo=_progressInfo;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
- (id)initWithRetCode:(int)arg1 progressInfo:(id)arg2;

@end

