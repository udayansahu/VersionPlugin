#import <Cordova/CDVPlugin.h>

@interface VersionNumber : CDVPlugin

- (void)getVersionNumber:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
