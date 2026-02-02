//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QBASIHTTPRequest;

@protocol QBASIProgressDelegate <NSObject>

@optional
- (void)request:(QBASIHTTPRequest *)arg1 incrementUploadSizeBy:(long long)arg2;
- (void)request:(QBASIHTTPRequest *)arg1 incrementDownloadSizeBy:(long long)arg2;
- (void)request:(QBASIHTTPRequest *)arg1 didSendBytes:(long long)arg2;
- (void)request:(QBASIHTTPRequest *)arg1 didReceiveBytes:(long long)arg2;
- (void)setProgress:(float)arg1;
@end

