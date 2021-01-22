#import <UIKit/UIKit.h>

@interface CDVWebViewInterceptorHandler : NSObject

- (NSData *)interceptRequest:(NSURL *)url withData:(NSData *)data;

@end
